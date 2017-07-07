#include "../../include/threadExt.hpp"
#include "../../include/log.hpp"

int main( int argc, char ** argv )
{
    LOG.info( "current thread id: {0}", ws::threadExt::PthreadSelf() );
    return 0;
}