#include <gtest.h>
#include "tbitfield.h"
#include "tset.h"
int main(int argc, char **argv) {
	TBitField a(7);
	cin >> a;
	cout << a;
	cout << "teper TSet"<<endl;
	TSet b(7);
	cin >> b;
	cout << b;



    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
