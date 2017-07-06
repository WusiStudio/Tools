#include "../../include/threadExt.hpp"
#include "../../include/log.hpp"

int main( int argc, char ** argv )
{
    ws::log.info( "current thread id: {0}", ws::PthreadSelf() );
    return 0;
}