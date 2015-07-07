//
// D3DObject.h
// Vorb Engine
//
// Created by Cristian Zaloj on 25 Jun 2015
// Copyright 2014 Regrowth Studios
// All Rights Reserved
//

/*! \file D3DObject.h
 * @brief 
 *
 *
 */

#pragma once

#ifndef Vorb_D3DObject_h__
//! @cond DOXY_SHOW_HEADER_GUARDS
#define Vorb_D3DObject_h__
//! @endcond

#ifndef VORB_USING_PCH
#include "../types.h"
#endif // !VORB_USING_PCH

#include <d3d11.h>

#include "graphics/IObject.h"

namespace vorb {
    namespace graphics {
        class D3DRenderTarget : public IRenderTarget {
        public:
            D3DRenderTarget(IDevice* owner) : IRenderTarget(owner) {
                // Empty
            }

            virtual void disposeInternal() override {
                if (view) view->Release();
            }

            ID3D11RenderTargetView* view = nullptr;
        };

        class D3DVertexDeclaration : public IVertexDeclaration {
        public:
            D3DVertexDeclaration(IContext* owner) : IVertexDeclaration(owner) {
                // Empty
            }

            virtual void disposeInternal() override {
                if (layout) layout->Release();
            }

            virtual size_t getMemoryUsed() const {
                throw std::logic_error("The method or operation is not implemented.");
            }

            ID3D11InputLayout* layout = nullptr;
        };
    }
}

#endif // !Vorb_D3DObject_h__
