/* main.c  -  Foundation app test  -  Public Domain  -  2013 Mattias Jansson / Rampant Pixels
 * 
 * This library provides a cross-platform foundation library in C11 providing basic support data types and
 * functions to write applications and games in a platform-independent fashion. The latest source code is
 * always available at
 * 
 * https://github.com/rampantpixels/foundation_lib
 * 
 * This library is put in the public domain; you can redistribute it and/or modify it without any restrictions.
 *
 */

#include <foundation.h>
#include <test/test.h>


int do_something( void )
{
	return 1;
}


DECLARE_TEST( app, startup )
{
	EXPECT_EQ( do_something(), 1 );
	return 0;
}


void test_declare( void )
{
	ADD_TEST( app, startup );
}
