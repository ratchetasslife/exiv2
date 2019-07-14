#include <exiv2/exiv2.hpp>

#include <iostream>

int main(int argc, char *argv[])
{
    try {
        Exiv2::XmpProperties::ns("gnome");
    } catch (Exiv2::Error &error) {
        std::cerr << "Caught error " << error.what() << "\n";
        Exiv2::XmpProperties::registerNs("http://www.gnome.org/xmp", "gnome");
    }
}