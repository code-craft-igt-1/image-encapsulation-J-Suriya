#pragma once
#include <vector>

struct Image {
    int m_rows;
    int m_columns;
    std::vector<std::vector<int>> m_pixels; // Assuming a 2D vector for pixel data

    Image(int rows, int columns) : m_rows(rows), m_columns(columns), m_pixels(rows, std::vector<int>(columns)) {}

    bool Validate() const {
        return m_columns <= 1024 && m_rows <= 1024;
    }

    int GetPixel(int x, int y) const {
        return m_pixels[x][y];
    }

    void SetPixel(int x, int y, int value) {
        m_pixels[x][y] = value;
    }

};
