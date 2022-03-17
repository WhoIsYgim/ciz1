#include <gtest/gtest.h>

extern "C" {
#include "storage.h"
#include "warship.h"
#include "input.h"
};
#define MAX_LEN 100
const char* name = "name";
const char* shipyard = "shipyard";
const char* campaign = "campaign";
const char* condition = "condition";
const int year = 1900;
const int crew = 500;


TEST (STORAGE_CONSTRUCTOR, TEST_STORAGE_CONSTRUCTOR) {
    size_t exp_len = 0;
    size_t exp_cap = 1;
    Warship* exp_ship = nullptr;

    Storage* test_storage = storage_constructor(0,1);

    EXPECT_EQ(test_storage->length, exp_len);
    EXPECT_EQ(test_storage->capacity, exp_cap);
    EXPECT_EQ(test_storage->ship, exp_ship);

    free_storage(&test_storage);
    EXPECT_EQ(test_storage, nullptr);
}
TEST (ADD_WARSHIP, TEST_ADD_WARSHIP) {
    Storage* test_storage = storage_constructor(0,1);

    add_warship(test_storage, (char*)name, (char*)shipyard, (char*)campaign, (char*)condition, year, crew);
    EXPECT_EQ(test_storage->ship[0].name, name);
    EXPECT_EQ(test_storage->ship[0].shipyard, shipyard);
    EXPECT_EQ(test_storage->ship[0].campaign, campaign);
    EXPECT_EQ(test_storage->ship[0].condition, condition);
    EXPECT_EQ(test_storage->ship[0].year, year);
    EXPECT_EQ(test_storage->ship[0].crew, crew);

    free_storage(&test_storage);
    EXPECT_EQ(test_storage, nullptr);
}


TEST (USER_INPUT, TEST_USER_INPUT){

    char* input_str = "name";
    FILE* in_stream = fmemopen(input_str, strlen(input_str),"r");

    char* test_buf = (char*) malloc(sizeof(char )*MAX_LEN);

    get_str(in_stream,test_buf);

    EXPECT_TRUE(strcmp(test_buf,input_str));
}
