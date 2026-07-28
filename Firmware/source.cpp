#include <driver/i2s_std.h>

#define I2S_BCLK 21
#define I2S_WS   1
#define I2S_DOUT 0

i2s_chan_handle_t tx_handle;

void setup() {
    // Create channel
    i2s_chan_config_t chan_cfg = I2S_CHANNEL_DEFAULT_CONFIG(
        I2S_NUM_0, I2S_ROLE_MASTER);

    i2s_new_channel(&chan_cfg, &tx_handle, NULL);

    // Configure standard mode
    i2s_std_config_t std_cfg = {
        .clk_cfg = I2S_STD_CLK_DEFAULT_CONFIG(44100),
        .slot_cfg = I2S_STD_MSB_SLOT_DEFAULT_CONFIG(
            I2S_DATA_BIT_WIDTH_16BIT,
            I2S_SLOT_MODE_MONO),
            .gpio_cfg = {
                .mclk = I2S_GPIO_UNUSED,
                .bclk = (gpio_num_t)I2S_BCLK,
                .ws = (gpio_num_t)I2S_WS,
                .dout = (gpio_num_t)I2S_DOUT,
                .din = I2S_GPIO_UNUSED,
                .invert_flags = {
                    .mclk_inv = false,
                    .bclk_inv = false,
                    .ws_inv = false
                }
            }
    };

    i2s_channel_init_std_mode(tx_handle, &std_cfg);
    i2s_channel_enable(tx_handle);

    randomSeed(analogRead(A0));
}

void loop() {
    int16_t buffer[512];

    for (int i = 0; i < 512; i++) {
        buffer[i] = random(-2000, 2000);  // volume
    }

    size_t bytes_written;
    i2s_channel_write(
        tx_handle,
        buffer,
        sizeof(buffer),
                      &bytes_written,
                      portMAX_DELAY);
}
