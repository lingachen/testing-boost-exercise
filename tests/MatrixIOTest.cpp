#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include "matrixIO.hpp"

using namespace Eigen;

BOOST_AUTO_TEST_SUITE(MatrixIOTests)

BOOST_AUTO_TEST_CASE(OpenData)
{
  MatrixXd expectedAnswer = MatrixXd(3, 3);
  expectedAnswer << 0.680375, 0.59688, -0.329554,
                    -0.211234, 0.823295, 0.536459,
                    0.566198, -0.604897, -0.444451;

  MatrixXd readMatrix = matrixIO::openData("../data/m3.csv", 3);

  BOOST_TEST(expectedAnswer.isApprox(readMatrix));
}

BOOST_AUTO_TEST_SUITE_END()