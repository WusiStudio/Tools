#include "../../include/log.hpp"


int main(int argc, char ** argv)
{
	ws::log.debug ( "haha" );
    ws::log.debug( "haha: {0}", "xiaowu" );

    ws::log.info( "typeid( ws::log ) = {0}", typeid( ws::log ).name() );
    ws::log.info( "typeid( log ) = {0}", typeid( ws::log ).name() );
    return 0;
}