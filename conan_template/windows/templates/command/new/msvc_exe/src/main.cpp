#include "{{ name }}.hpp"
#include <string>
#include <vector>

int main() {
  {{ name }}();

  std::vector<std::string> vec;
  vec.push_back("test_package");

  {{ name }}_print_vector(vec);
}
