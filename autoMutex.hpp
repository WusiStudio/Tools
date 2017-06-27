#pragma once
#ifndef __AUTO_MUTEX_HPP__
#define __AUTO_MUTEX_HPP__

#include <thread>

namespace ws
{
    class autoMutex
    {
    public:
        autoMutex( std::mutex & p_mutex )
        {
            mMutex = & p_mutex;
            mMutex->lock();
        }

        ~autoMutex(void)
        {
            mMutex->unlock();
        }
    private:
        std::mutex * mMutex;
    };
}

#endif //__AUTO_MUTEX_HPP__