#pragma once
#define CIRCULAR_BUFFER_INT_SAFE
#include <Arduino.h>
#include <CircularBuffer.h>


class CircularBufferWriter
{
    public:
        CircularBuffer<uint8_t, 2048> buffer;
        // Writes one byte, returns the number of bytes written (0 or 1)
        size_t write(uint8_t c);
        // Writes several bytes, returns the number of bytes written
        size_t write(const uint8_t *buffer, size_t length);
    private:
        
};