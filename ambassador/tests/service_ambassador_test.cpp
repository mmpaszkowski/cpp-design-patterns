//
// Created by noname on 17.07.23.
//

#include <gtest/gtest.h>
#include <ServiceAmbassador.h>

TEST(ambassador, verify_service_ambassador)
{
    long result = ServiceAmbassador().doRemoteFunction(10);
    ASSERT_TRUE(result == 100 || result == -1);
}
