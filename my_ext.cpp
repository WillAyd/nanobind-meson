#include <nanobind/nanobind.h>

namespace nb = nanobind;

class Foo {
public:
  auto GetNumber() const -> int {
    return 42;
  }
};


NB_MODULE(my_ext, m) {
  nb::class_<Foo>(m, "Foo")
    .def(nb::init<>())
    .def("get_number", &Foo::GetNumber);
}
