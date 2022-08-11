#include "CircularBufferWriter.h"

size_t CircularBufferWriter::write(const uint8_t *buff, size_t length)
{
    for (int i = 0; i < length; i++)
    {
        write(buff[i]);
    }
    return length;
}

size_t CircularBufferWriter::write(uint8_t c)
{
    while (true)
    {

        if (!buffer.isFull())
        {
            buffer.push(c);
            return 1;
        }
        else
        {
            //Serial.println("Write Yielded");
            taskYIELD();
        }
    }
}
