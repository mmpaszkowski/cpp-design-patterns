//
// Created by noname on 01.07.23.
//

#include <gtest/gtest.h>
#include <Nazgul.h>

TEST(nazgul, test_get_instance)
{
    std::vector<NazgulName> nazguls_names{
        NazgulName::Khamul,
        NazgulName::Murazor,
        NazgulName::Dwar,
        NazgulName::JiIndur,
        NazgulName::Akhorahil,
        NazgulName::Hoarmurath,
        NazgulName::Adunaphel,
        NazgulName::Ren,
        NazgulName::Uvatha,
    };

    for(auto name : nazguls_names)
    {
        const Nazgul& nazgul = Nazgul::getInstance(name);
        ASSERT_EQ(&nazgul, &Nazgul::getInstance(name));
        ASSERT_EQ(name, Nazgul::getInstance(name).getName());
    }
}