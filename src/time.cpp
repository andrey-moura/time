#include "time.hpp"

std::string uva::time::iso_now()
{
    time_t now = ::time(NULL);
    tm* t = gmtime(&now);

    static char buffer[512];
    strftime(buffer, sizeof(buffer), "%F %T %z", t);

    return buffer;
}
