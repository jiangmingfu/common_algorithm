/**
 *
 * @Author jiangmingfu
 * @Date   2019.03.20
 */

#ifndef __ALGO_BUBBLE_SORT_HPP__
#define __ALGO_BUBBLE_SORT_HPP__

#include <functional>

namespace algo {

    // 冒泡排序
    template <class T, class Cmp = std::greater<>>
    void BubbleSort(T* data, int32_t n)
    {
        T tmp;
        for (int32_t i = n-1; i >= 0; --i) {
            for (int32_t j = 1; j <= i; ++j) {
                if (Cmp(data[j], data[j+1])) {
                    tmp = data[j];
                    data[j] = data[j - 1];
                    data[j - 1] = tmp;
                }
            }
        }
    }
}

#endif // __ALGO_BUBBLE_SORT_HPP__
/* EOF */
