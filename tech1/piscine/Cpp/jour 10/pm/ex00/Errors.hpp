#pragma once

#include <string>
#include <exception>

class NasaError : public std::exception
{
    protected:
        std::string _message;
        std::string _component;

    public:
        NasaError(std::string const &message, std::string const &component = "Unknown");
        virtual const char *what() const noexcept override;
        std::string const &getComponent() const;
};

class MissionCriticalError : public virtual NasaError
{
    public:
        MissionCriticalError(std::string const &message, std::string const &component = "Unknown");
};

class LifeCriticalError : public virtual NasaError
{
    public:
        LifeCriticalError(std::string const &message, std::string const &component = "Unknown");
};

class UserError : public virtual NasaError
{
    public:
        UserError(std::string const &message, std::string const &component = "Unknown");
};

class CommunicationError : public virtual NasaError
{
    public:
        CommunicationError(std::string const &message);
};
