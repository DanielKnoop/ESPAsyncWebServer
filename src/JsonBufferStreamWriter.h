#pragma once

#include <Arduino.h>
#include "freertos/stream_buffer.h"


class JsonBufferStreamWriter
{
    public:
        StreamBufferHandle_t streamBufferHandle;
        // Writes one byte, returns the number of bytes written (0 or 1)
        size_t write(uint8_t c);
        // Writes several bytes, returns the number of bytes written
        size_t write(const uint8_t *buffer, size_t length);

        JsonBufferStreamWriter();
        ~JsonBufferStreamWriter();
    private:
        
};