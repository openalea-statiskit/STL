from statiskit import stl

import unittest
from nose.plugins.attrib import attr

@attr(linux=True, 
      osx=True,
      win=True,
      level=1)
class TestSet(unittest.TestCase):

    pass
    # def test___initialization(self):
    #     """Test set initialization"""

    #     s = stl.SetLessIndex()
    #     self.assertEqual(len(s), 0)

    #     s = stl.SetLessDouble()
    #     self.assertEqual(len(s), 0)

    # def test__manipulation(self):
    #     """Test set manipulation"""

    #     # s = stl.SetLessIndex()
    #     # self.assertTrue(s.insert(0))
    #     # self.assertEqual(len(s), 1)
    #     # self.assertEqual(s.count(0), 1)
    #     # self.assertTrue(s.erase(0))
    #     # self.assertEqual(len(s), 0)
    #     # self.assertEqual(s.count(0), 0)

    #     s = stl.SetLessDouble()
    #     self.assertTrue(s.insert(0.0))
    #     self.assertEqual(len(s), 1)
    #     self.assertEqual(s.count(0.0), 1)
    #     self.assertTrue(s.erase(0.0))
    #     self.assertEqual(len(s), 0)
    #     self.assertEqual(s.count(0.0), 0)

    # def test_str(self):
    #     """Test set string representation"""

    #     # s = stl.SetLessIndex()
    #     # s.insert(0)
    #     # s.insert(1)
    #     # self.assertEqual(str(s), "{0, 1}")

    #     s = stl.SetLessDouble()
    #     s.insert(0.0)
    #     s.insert(1.0)
    #     self.assertEqual(str(s), "{0.0, 1.0}")

    # def test_repr_latex(self):
    #     """Test set latex representation"""

    #     # s = stl.SetLessIndex()
    #     # s.insert(0)
    #     # s.insert(1)
    #     # self.assertEqual(s._repr_latex_(), "$\\left\\{0, 1\\right\\}$")

    #     s = stl.SetLessDouble()
    #     s.insert(0.0)
    #     s.insert(1.0)
    #     self.assertEqual(s._repr_latex_(), "$\\left\\{0.0, 1.0\\right\\}$")
