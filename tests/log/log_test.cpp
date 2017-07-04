#include "../../include/log.hpp"


int main(int argc, char ** argv)
{
    ws::log log;

	log.debug ( "haha" );
    log.debug( "haha: {0}", "xiaowu" );

    log.info( "typeid( ws::log ) = {0}", typeid( ws::log ).name() );
    log.info( "typeid( log ) = {0}", typeid( log ).name() );
    return 0;
}