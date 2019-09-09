#ifndef CK_ARRAY_HELPER_HPP
#define CK_ARRAY_HELPER_HPP

#include "Array.hpp"

namespace ck {

template <typename T, index_t NSize>
__host__ __device__ void print_Array(const char* s, Array<T, NSize> a)
{
    constexpr index_t nsize = a.GetSize();

    static_assert(nsize > 0 && nsize <= 10, "wrong!");

    static_if<nsize == 1>{}([&](auto) { printf("%s size %u, {%u}\n", s, nsize, a[0]); });

    static_if<nsize == 2>{}([&](auto) { printf("%s size %u, {%u %u}\n", s, nsize, a[0], a[1]); });

    static_if<nsize == 3>{}(
        [&](auto) { printf("%s size %u, {%u %u %u}\n", s, nsize, a[0], a[1], a[2]); });

    static_if<nsize == 4>{}(
        [&](auto) { printf("%s size %u, {%u %u %u %u}\n", s, nsize, a[0], a[1], a[2], a[3]); });

    static_if<nsize == 5>{}([&](auto) {
        printf("%s size %u, {%u %u %u %u %u}\n", s, nsize, a[0], a[1], a[2], a[3], a[4]);
    });

    static_if<nsize == 6>{}([&](auto) {
        printf("%s size %u, {%u %u %u %u %u %u}\n", s, nsize, a[0], a[1], a[2], a[3], a[4], a[5]);
    });

    static_if<nsize == 7>{}([&](auto) {
        printf("%s size %u, {%u %u %u %u %u %u %u}\n",
               s,
               nsize,
               a[0],
               a[1],
               a[2],
               a[3],
               a[4],
               a[5],
               a[6]);
    });

    static_if<nsize == 8>{}([&](auto) {
        printf("%s size %u, {%u %u %u %u %u %u %u %u}\n",
               s,
               nsize,
               a[0],
               a[1],
               a[2],
               a[3],
               a[4],
               a[5],
               a[6],
               a[7]);
    });

    static_if<nsize == 9>{}([&](auto) {
        printf("%s size %u, {%u %u %u %u %u %u %u %u %u}\n",
               s,
               nsize,
               a[0],
               a[1],
               a[2],
               a[3],
               a[4],
               a[5],
               a[6],
               a[7],
               a[8]);
    });

    static_if<nsize == 10>{}([&](auto) {
        printf("%s size %u, {%u %u %u %u %u %u %u %u %u %u}\n",
               s,
               nsize,
               a[0],
               a[1],
               a[2],
               a[3],
               a[4],
               a[5],
               a[6],
               a[7],
               a[8],
               a[9]);
    });
}

} // namespace ck
#endif