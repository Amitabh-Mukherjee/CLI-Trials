//Entity.h
#pragma once
#include "ManagedObject.h"
#include "../Core/Core/Core.h"
using namespace System;
namespace CLI
{
    public ref class Entity : public ManagedObject<Core::Entity>
    {
    public:
        //declare all the members from the core class that you want to access from the .NET context.

        // Constructor
        Entity(String^ name, float xPos, float yPos);
        void Move(float deltaX, float deltaY);

        //Create Properties to access these methods from C#
        property float XPosition
        {
        public:
            float get()
            {
                return m_Instance->GetXPosition();
            }
        private:
            void set(float value)
            {
            }
        }
        property float YPosition
        {
        public:
            float get()
            {
                return m_Instance->GetYPosition();
            }
        private:
            void set(float value)
            {
            }
        }
    };
}