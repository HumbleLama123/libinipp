#pragma once

#ifndef INIWIZARD_HPP
#define INIWIZARD_HPP

namespace iniwizard
{
    enum iniwizard_types
    {
        iniwizard_string,
        iniwizard_namespace
    };

    class manipulator
    {
      public:
        manipulator();

        const char *read(const char *string_name);

        const char *read(const char *namespace_name, const char *string_name);

        bool parse(const char *file_path);

        bool contains(const char *name, const iniwizard_types &type);

        bool contains(const char *namespace_name, const char *string_name);
    };
} // namespace iniwizard

#endif // INIWIZARD_HPP