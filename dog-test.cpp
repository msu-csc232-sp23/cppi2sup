//
// Created by Jim Daehn on 2/27/23.
//


#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include <iostream>
#include <string>
#include "Dog.h"
#include "GreatDaehn.h"
#include "Yorkie.h"
#include "doctest.h"

TEST_SUITE( "Dog commands" ) {
    Dog * dog{ new GreatDaehn{ } };

    TEST_CASE("Great Daehns bark real loud") {
        dog = new GreatDaehn{ };
        std::stringstream buffer { };
        std::streambuf* sbuf = std::cout.rdbuf( buffer.rdbuf( ) );

        dog->bark( );

        std::string expected { "WOOF!\n" };
        std::string actual { buffer.str( ) };
        REQUIRE_EQ(expected, actual);
        std::cout.rdbuf( sbuf );
    }

    TEST_CASE("Yorkies bark in a high pitched voice") {
        dog = new Yorkie{ };
        std::stringstream buffer { };
        std::streambuf* sbuf = std::cout.rdbuf( buffer.rdbuf( ) );

        dog->bark( );

        std::string expected { "yip yip!\n" };
        std::string actual { buffer.str( ) };
        REQUIRE_EQ(expected, actual);
        std::cout.rdbuf( sbuf );
    }
}