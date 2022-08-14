#include "JsonBufferStreamWriter.h"

JsonBufferStreamWriter::JsonBufferStreamWriter()
{
    this->streamBufferHandle = xStreamBufferCreate(128, 1); 
}

JsonBufferStreamWriter::~JsonBufferStreamWriter()
{
    if(this->streamBufferHandle)
    {
        vStreamBufferDelete(this->streamBufferHandle);
    }
}

size_t JsonBufferStreamWriter::write(const uint8_t *buff, size_t length)
{
    for (int i = 0; i < length; i++)
    {
        write(buff[i]);
    }
    return length;
}

size_t JsonBufferStreamWriter::write(uint8_t c)
{
   xStreamBufferSend(this->streamBufferHandle, &c, 1, pdMS_TO_TICKS( 1000 ));
   return 1;
}
