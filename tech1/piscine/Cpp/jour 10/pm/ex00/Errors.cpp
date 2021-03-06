/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Errors
*/

#include "Errors.hpp"
#include <iostream>

NasaError::NasaError(std::string const &message, std::string const &component)
{
    this->_message = message;
    this->_component = component;
}

std::string const &NasaError::getComponent() const
{
    return this->_component;
}

const char *NasaError::what() const noexcept
{
    return this->_message.data();
}



MissionCriticalError::MissionCriticalError(std::string const &message, std::string const &component) : NasaError::NasaError(message, component)
{
}

LifeCriticalError::LifeCriticalError(std::string const &message, std::string const &component) : NasaError::NasaError(message, component)
{
}

UserError::UserError(std::string const &message, std::string const &component) : NasaError::NasaError(message, component)
{

}

CommunicationError::CommunicationError(std::string const &message) : NasaError::NasaError(message, "CommunicationDevice")
{

}