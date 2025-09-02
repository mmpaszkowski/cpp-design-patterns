//
// Created by Mateusz Paszkowski on 01.07.2023.
//

#include <gtest/gtest.h>
#include <Nazgul.h>

using namespace dp;

TEST(nazgul, test_iterator)
{
    testing::internal::CaptureStdout();

    for(auto it = Nazgul::begin(); it != Nazgul::end(); it++)
    {
        std::cout << "First: " << it->first << ", Second: " << it->second.getName() << std::endl;
    }

    std::string expected_result =
    "First: Khamul, Second: Khamul\n"
    "First: Murazor, Second: Murazor\n"
    "First: Dwar, Second: Dwar\n"
    "First: JiIndur, Second: JiIndur\n"
    "First: Akhorahil, Second: Akhorahil\n"
    "First: Hoarmurath, Second: Hoarmurath\n"
    "First: Adunaphel, Second: Adunaphel\n"
    "First: Ren, Second: Ren\n"
    "First: Uvatha, Second: Uvatha\n";

    ASSERT_EQ(testing::internal::GetCapturedStdout(), expected_result);


}