/**
 * @file pch.h
 * @brief Prekompilowany nagłówek dla projektu testowego z Google Test.
 *
 * Plik ten jest używany jako prekompilowany nagłówek (PCH) w Visual Studio,
 * aby przyspieszyć kompilację testów jednostkowych.
 *
 * Zawiera nagłówek Google Test, dzięki czemu wszystkie pliki testowe
 * mają do niego dostęp.
 *
 * @note Każdy plik źródłowy korzystający z PCH powinien najpierw
 *       dołączać ten nagłówek.
 */

#pragma once

#include "gtest/gtest.h"