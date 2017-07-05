#include "../../include/threadExt.hpp"
#include "../../include/log.hpp"

ws::log WSLOG;

int main( int argc, char ** argv )
{
    WSLOG.info( "current thread id: {0}", ws::PthreadSelf() );
    return 0;
}