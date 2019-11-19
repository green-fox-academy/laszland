
#include <gtest/gtest.h>

// creating class Car
class Car {
public:
    void drive() {_gas -= 5;}
    void refill() {_gas = 100;}
    int getGas() {return _gas;}

private:
    int _gas = 100;
};


// Test Fixture
class CarTest : public ::testing::Test {
protected:
    //executed before every test
    void SetUp() override {
        _car.refill();
        std::cout << "I'm executing this before every test." << std::endl;
    }
    void TearDown() override {
        std::cout << "I'm finished the test" << std::endl;
    }

    Car _car;
};

// writing the test
TEST_F(CarTest, DriveOnce) {
    _car.drive(); // invite the drive() function of class Car
    EXPECT_EQ(_car.getGas(), 9);
}

TEST_F(CarTest, DriveThreeTimes) {
    _car.drive();
    _car.drive();
    _car.drive();
    EXPECT_EQ(_car.getGas(), 85);
}

