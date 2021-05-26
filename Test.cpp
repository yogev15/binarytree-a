#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include "doctest.h"
#include "BinaryTree.hpp"

using namespace std;
using namespace ariel;


TEST_CASE("add tests"){
    BinaryTree<int> tree;

    CHECK_THROWS(tree.add_left(4,6)); //root didnt initialized
    CHECK_NOTHROW(tree.add_right(1,2));
    CHECK_NOTHROW(tree.add_root(1)); //initializing root

    //legal inserts to the tree
    CHECK_NOTHROW(tree.add_right(1,2));
    CHECK_NOTHROW(tree.add_left(1,3));
    CHECK_NOTHROW(tree.add_right(2,6));
    CHECK_NOTHROW(tree.add_right(3,4));
    CHECK_NOTHROW(tree.add_left(3,5));
    CHECK_NOTHROW(tree.add_right(6,22));
    CHECK_NOTHROW(tree.add_left(5,14));
    CHECK_NOTHROW(tree.add_right(6,99));
    CHECK_NOTHROW(tree.add_right(4,77));
    CHECK_NOTHROW(tree.add_left(4,20));
    CHECK_NOTHROW(tree.add_root(105)); //replacing the value of the root

    //unlegal inserts to the tree
    CHECK_THROWS(tree.add_left(7,3));
    CHECK_THROWS(tree.add_right(9,8));
    CHECK_THROWS(tree.add_left(16,2));
    CHECK_THROWS(tree.add_right(55,4));
    CHECK_THROWS(tree.add_left(7,3));
    CHECK_THROWS(tree.add_right(9,8));
    CHECK_THROWS(tree.add_left(60,567));
    CHECK_THROWS(tree.add_right(12,34));
}
