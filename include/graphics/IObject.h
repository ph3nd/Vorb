//
// IObject.h
// Vorb Engine
//
// Created by Cristian Zaloj on 2 Jun 2015
// Copyright 2014 Regrowth Studios
// All Rights Reserved
//

/*! \file IObject.h
 * @brief 
 */

#pragma once

#ifndef Vorb_IObject_h__
//! @cond DOXY_SHOW_HEADER_GUARDS
#define Vorb_IObject_h__
//! @endcond

#ifndef VORB_USING_PCH
#include "../types.h"
#endif // !VORB_USING_PCH

namespace vorb {
    namespace graphics {
        class IDevice;

        /* @brief
         */
        class IObject {
            friend class IDevice;
        public:
            virtual ~IObject() {
                // Empty
            }

        protected:
            IObject(IDevice* owner) :
                m_owner(owner) {
                // Empty
            }

            IDevice* m_owner; ///< The state view that owns this object.
        };

        /* @brief
         */
        class IVertexDeclaration : public IObject {
        public:

        protected:
            IVertexDeclaration(IDevice* owner);
        };

        /* @brief
         */
        class IEffect : public IObject {
        public:

        protected:
            IEffect(IDevice* owner);
        };
    }
}
namespace vg = vorb::graphics;

#endif // !Vorb_IObject_h__