/*
 * Copyright 2011-2013 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#ifndef BGFX_GLCONTEXT_NSGL_H_HEADER_GUARD
#define BGFX_GLCONTEXT_NSGL_H_HEADER_GUARD

#if BX_PLATFORM_IOS

namespace bgfx
{
	struct GlContext
	{
		GlContext()
			: m_context(0)
		{
		}
        
		void create(uint32_t _width, uint32_t _height);
		void destroy();
		void resize(uint32_t _width, uint32_t _height, bool _vsync);
		void swap();
		void import();
        
		bool isValid() const
		{
			return 0 != m_context;
		}
        
		void* m_view;
		void* m_context;
	};
} // namespace bgfx

#endif // BX_PLATFORM_IOS

#endif // BGFX_GLCONTEXT_NSGL_H_HEADER_GUARD
