#include "../../include/log.hpp"


int main(int argc, char ** argv)
{
	LOG.debug ( "haha" );
	LOG.debug( "haha: {0}", "xiaowu" );

	LOG.info( "typeid( ws::log ) = {0}", typeid( ws::log ).name() );
	LOG.info( "typeid( log ) = {0}", typeid( ws::log ).name() );
    return 0;
}