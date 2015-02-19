//==================================================================================================================|
// Created 2015.01.12 by Daniel L. Watkins
//
// Copyright (C) 2014-2015 Daniel L. Watkins
// This file is licensed under the MIT License.
//==================================================================================================================|

#ifndef _t3d_CORE_MATERIAL_DATA_H
#define _t3d_CORE_MATERIAL_DATA_H

#include "MeshPrivate.h"

namespace t3d { namespace asset
{
	class mesh_p::MaterialData : public OpenGLFunctions
	{
	public: //TODO massive
		QString mName;
		QString mFilepath;

		strong<QOpenGLTexture> mTexture;

		void uploadMaterialData(const QString &containingDirectory);
		void bind();
		void release();
	};
}}

#endif
