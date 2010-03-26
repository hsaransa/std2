/* generated: Fri Mar 26 16:06:11 2010
 * arguments: scripts/gccxml.py TRIVIAL /usr/include/GL/gl.h prefix:gl trivialfunctions
 */
static void wrap_glClearDepth(void* ret, void* const* args) {
    (void)ret;
        glClearDepth(*(double*)args[0]);
}
static void wrap_glPixelStoref(void* ret, void* const* args) {
    (void)ret;
        glPixelStoref(*(int*)args[0], *(float*)args[1]);
}
static void wrap_glFrontFace(void* ret, void* const* args) {
    (void)ret;
        glFrontFace(*(int*)args[0]);
}
static void wrap_glLoadIdentity(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glLoadIdentity();
}
static void wrap_glLogicOp(void* ret, void* const* args) {
    (void)ret;
        glLogicOp(*(int*)args[0]);
}
static void wrap_glColorMaterial(void* ret, void* const* args) {
    (void)ret;
        glColorMaterial(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glTexEnvf(void* ret, void* const* args) {
    (void)ret;
        glTexEnvf(*(int*)args[0], *(int*)args[1], *(float*)args[2]);
}
static void wrap_glTexEnvi(void* ret, void* const* args) {
    (void)ret;
        glTexEnvi(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glStencilOp(void* ret, void* const* args) {
    (void)ret;
        glStencilOp(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glRenderMode(void* ret, void* const* args) {
    *(int*)ret =
        glRenderMode(*(int*)args[0]);
}
static void wrap_glPixelStorei(void* ret, void* const* args) {
    (void)ret;
        glPixelStorei(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glCullFace(void* ret, void* const* args) {
    (void)ret;
        glCullFace(*(int*)args[0]);
}
static void wrap_glNormal3d(void* ret, void* const* args) {
    (void)ret;
        glNormal3d(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glNormal3f(void* ret, void* const* args) {
    (void)ret;
        glNormal3f(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glNormal3i(void* ret, void* const* args) {
    (void)ret;
        glNormal3i(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glColor3ui(void* ret, void* const* args) {
    (void)ret;
        glColor3ui(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glColor3us(void* ret, void* const* args) {
    (void)ret;
        glColor3us(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glViewport(void* ret, void* const* args) {
    (void)ret;
        glViewport(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glEndList(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glEndList();
}
static void wrap_glIndexub(void* ret, void* const* args) {
    (void)ret;
        glIndexub(*(int*)args[0]);
}
static void wrap_glAlphaFunc(void* ret, void* const* args) {
    (void)ret;
        glAlphaFunc(*(int*)args[0], *(float*)args[1]);
}
static void wrap_glPopAttrib(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glPopAttrib();
}
static void wrap_glReadBuffer(void* ret, void* const* args) {
    (void)ret;
        glReadBuffer(*(int*)args[0]);
}
static void wrap_glPixelZoom(void* ret, void* const* args) {
    (void)ret;
        glPixelZoom(*(float*)args[0], *(float*)args[1]);
}
static void wrap_glOrtho(void* ret, void* const* args) {
    (void)ret;
        glOrtho(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3], *(double*)args[4], *(double*)args[5]);
}
static void wrap_glScissor(void* ret, void* const* args) {
    (void)ret;
        glScissor(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glEvalCoord1d(void* ret, void* const* args) {
    (void)ret;
        glEvalCoord1d(*(double*)args[0]);
}
static void wrap_glBindTexture(void* ret, void* const* args) {
    (void)ret;
        glBindTexture(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glDrawArrays(void* ret, void* const* args) {
    (void)ret;
        glDrawArrays(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glPopName(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glPopName();
}
static void wrap_glTexGenf(void* ret, void* const* args) {
    (void)ret;
        glTexGenf(*(int*)args[0], *(int*)args[1], *(float*)args[2]);
}
static void wrap_glTexGeni(void* ret, void* const* args) {
    (void)ret;
        glTexGeni(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glTexParameterf(void* ret, void* const* args) {
    (void)ret;
        glTexParameterf(*(int*)args[0], *(int*)args[1], *(float*)args[2]);
}
static void wrap_glTexParameteri(void* ret, void* const* args) {
    (void)ret;
        glTexParameteri(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glTexGend(void* ret, void* const* args) {
    (void)ret;
        glTexGend(*(int*)args[0], *(int*)args[1], *(double*)args[2]);
}
static void wrap_glMapGrid1d(void* ret, void* const* args) {
    (void)ret;
        glMapGrid1d(*(int*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glMapGrid1f(void* ret, void* const* args) {
    (void)ret;
        glMapGrid1f(*(int*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glMapGrid2d(void* ret, void* const* args) {
    (void)ret;
        glMapGrid2d(*(int*)args[0], *(double*)args[1], *(double*)args[2], *(int*)args[3], *(double*)args[4], *(double*)args[5]);
}
static void wrap_glMapGrid2f(void* ret, void* const* args) {
    (void)ret;
        glMapGrid2f(*(int*)args[0], *(float*)args[1], *(float*)args[2], *(int*)args[3], *(float*)args[4], *(float*)args[5]);
}
static void wrap_glAccum(void* ret, void* const* args) {
    (void)ret;
        glAccum(*(int*)args[0], *(float*)args[1]);
}
static void wrap_glShadeModel(void* ret, void* const* args) {
    (void)ret;
        glShadeModel(*(int*)args[0]);
}
static void wrap_glPolygonMode(void* ret, void* const* args) {
    (void)ret;
        glPolygonMode(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glListBase(void* ret, void* const* args) {
    (void)ret;
        glListBase(*(int*)args[0]);
}
static void wrap_glNewList(void* ret, void* const* args) {
    (void)ret;
        glNewList(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glInitNames(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glInitNames();
}
static void wrap_glCopyTexImage1D(void* ret, void* const* args) {
    (void)ret;
        glCopyTexImage1D(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5], *(int*)args[6]);
}
static void wrap_glCopyTexImage2D(void* ret, void* const* args) {
    (void)ret;
        glCopyTexImage2D(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5], *(int*)args[6], *(int*)args[7]);
}
static void wrap_glEvalMesh1(void* ret, void* const* args) {
    (void)ret;
        glEvalMesh1(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glEvalMesh2(void* ret, void* const* args) {
    (void)ret;
        glEvalMesh2(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4]);
}
static void wrap_glDrawBuffer(void* ret, void* const* args) {
    (void)ret;
        glDrawBuffer(*(int*)args[0]);
}
static void wrap_glLightf(void* ret, void* const* args) {
    (void)ret;
        glLightf(*(int*)args[0], *(int*)args[1], *(float*)args[2]);
}
static void wrap_glRasterPos2d(void* ret, void* const* args) {
    (void)ret;
        glRasterPos2d(*(double*)args[0], *(double*)args[1]);
}
static void wrap_glRasterPos2f(void* ret, void* const* args) {
    (void)ret;
        glRasterPos2f(*(float*)args[0], *(float*)args[1]);
}
static void wrap_glRasterPos2s(void* ret, void* const* args) {
    (void)ret;
        glRasterPos2s(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glRasterPos3d(void* ret, void* const* args) {
    (void)ret;
        glRasterPos3d(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glRasterPos3f(void* ret, void* const* args) {
    (void)ret;
        glRasterPos3f(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glRasterPos3i(void* ret, void* const* args) {
    (void)ret;
        glRasterPos3i(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glPushAttrib(void* ret, void* const* args) {
    (void)ret;
        glPushAttrib(*(int*)args[0]);
}
static void wrap_glDepthFunc(void* ret, void* const* args) {
    (void)ret;
        glDepthFunc(*(int*)args[0]);
}
static void wrap_glRasterPos4d(void* ret, void* const* args) {
    (void)ret;
        glRasterPos4d(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3]);
}
static void wrap_glRasterPos4f(void* ret, void* const* args) {
    (void)ret;
        glRasterPos4f(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glRasterPos4i(void* ret, void* const* args) {
    (void)ret;
        glRasterPos4i(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glRasterPos4s(void* ret, void* const* args) {
    (void)ret;
        glRasterPos4s(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glStencilFunc(void* ret, void* const* args) {
    (void)ret;
        glStencilFunc(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glEnableClientState(void* ret, void* const* args) {
    (void)ret;
        glEnableClientState(*(int*)args[0]);
}
static void wrap_glDepthMask(void* ret, void* const* args) {
    (void)ret;
        glDepthMask(*(int*)args[0]);
}
static void wrap_glColor3b(void* ret, void* const* args) {
    (void)ret;
        glColor3b(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glColor3f(void* ret, void* const* args) {
    (void)ret;
        glColor3f(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glColor3i(void* ret, void* const* args) {
    (void)ret;
        glColor3i(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glColor3s(void* ret, void* const* args) {
    (void)ret;
        glColor3s(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glColor4ui(void* ret, void* const* args) {
    (void)ret;
        glColor4ui(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glColor4us(void* ret, void* const* args) {
    (void)ret;
        glColor4us(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glColor4b(void* ret, void* const* args) {
    (void)ret;
        glColor4b(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glColor4d(void* ret, void* const* args) {
    (void)ret;
        glColor4d(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3]);
}
static void wrap_glColor4f(void* ret, void* const* args) {
    (void)ret;
        glColor4f(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glColor4i(void* ret, void* const* args) {
    (void)ret;
        glColor4i(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glColor4s(void* ret, void* const* args) {
    (void)ret;
        glColor4s(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glStencilMask(void* ret, void* const* args) {
    (void)ret;
        glStencilMask(*(int*)args[0]);
}
static void wrap_glMatrixMode(void* ret, void* const* args) {
    (void)ret;
        glMatrixMode(*(int*)args[0]);
}
static void wrap_glPolygonOffset(void* ret, void* const* args) {
    (void)ret;
        glPolygonOffset(*(float*)args[0], *(float*)args[1]);
}
static void wrap_glFogf(void* ret, void* const* args) {
    (void)ret;
        glFogf(*(int*)args[0], *(float*)args[1]);
}
static void wrap_glFogi(void* ret, void* const* args) {
    (void)ret;
        glFogi(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glEdgeFlag(void* ret, void* const* args) {
    (void)ret;
        glEdgeFlag(*(int*)args[0]);
}
static void wrap_glDisableClientState(void* ret, void* const* args) {
    (void)ret;
        glDisableClientState(*(int*)args[0]);
}
static void wrap_glPixelTransferf(void* ret, void* const* args) {
    (void)ret;
        glPixelTransferf(*(int*)args[0], *(float*)args[1]);
}
static void wrap_glFlush(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glFlush();
}
static void wrap_glEnable(void* ret, void* const* args) {
    (void)ret;
        glEnable(*(int*)args[0]);
}
static void wrap_glClearIndex(void* ret, void* const* args) {
    (void)ret;
        glClearIndex(*(float*)args[0]);
}
static void wrap_glNormal3s(void* ret, void* const* args) {
    (void)ret;
        glNormal3s(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glLineStipple(void* ret, void* const* args) {
    (void)ret;
        glLineStipple(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glFinish(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glFinish();
}
static void wrap_glHint(void* ret, void* const* args) {
    (void)ret;
        glHint(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glColor3d(void* ret, void* const* args) {
    (void)ret;
        glColor3d(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glLighti(void* ret, void* const* args) {
    (void)ret;
        glLighti(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glPassThrough(void* ret, void* const* args) {
    (void)ret;
        glPassThrough(*(float*)args[0]);
}
static void wrap_glColor4ub(void* ret, void* const* args) {
    (void)ret;
        glColor4ub(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glRasterPos2i(void* ret, void* const* args) {
    (void)ret;
        glRasterPos2i(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glScaled(void* ret, void* const* args) {
    (void)ret;
        glScaled(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glScalef(void* ret, void* const* args) {
    (void)ret;
        glScalef(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glVertex2d(void* ret, void* const* args) {
    (void)ret;
        glVertex2d(*(double*)args[0], *(double*)args[1]);
}
static void wrap_glMaterialf(void* ret, void* const* args) {
    (void)ret;
        glMaterialf(*(int*)args[0], *(int*)args[1], *(float*)args[2]);
}
static void wrap_glMateriali(void* ret, void* const* args) {
    (void)ret;
        glMateriali(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glGenLists(void* ret, void* const* args) {
    *(int*)ret =
        glGenLists(*(int*)args[0]);
}
static void wrap_glGetError(void* ret, void* const* args) {
    (void)args;
    *(int*)ret =
        glGetError();
}
static void wrap_glClearColor(void* ret, void* const* args) {
    (void)ret;
        glClearColor(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glPushName(void* ret, void* const* args) {
    (void)ret;
        glPushName(*(int*)args[0]);
}
static void wrap_glColor3ub(void* ret, void* const* args) {
    (void)ret;
        glColor3ub(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glIsTexture(void* ret, void* const* args) {
    *(int*)ret =
        glIsTexture(*(int*)args[0]);
}
static void wrap_glVertex3d(void* ret, void* const* args) {
    (void)ret;
        glVertex3d(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glDisable(void* ret, void* const* args) {
    (void)ret;
        glDisable(*(int*)args[0]);
}
static void wrap_glLightModelf(void* ret, void* const* args) {
    (void)ret;
        glLightModelf(*(int*)args[0], *(float*)args[1]);
}
static void wrap_glClearStencil(void* ret, void* const* args) {
    (void)ret;
        glClearStencil(*(int*)args[0]);
}
static void wrap_glPixelTransferi(void* ret, void* const* args) {
    (void)ret;
        glPixelTransferi(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glCopyPixels(void* ret, void* const* args) {
    (void)ret;
        glCopyPixels(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4]);
}
static void wrap_glCallList(void* ret, void* const* args) {
    (void)ret;
        glCallList(*(int*)args[0]);
}
static void wrap_glEvalPoint1(void* ret, void* const* args) {
    (void)ret;
        glEvalPoint1(*(int*)args[0]);
}
static void wrap_glEvalPoint2(void* ret, void* const* args) {
    (void)ret;
        glEvalPoint2(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glPushClientAttrib(void* ret, void* const* args) {
    (void)ret;
        glPushClientAttrib(*(int*)args[0]);
}
static void wrap_glDeleteLists(void* ret, void* const* args) {
    (void)ret;
        glDeleteLists(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glFrustum(void* ret, void* const* args) {
    (void)ret;
        glFrustum(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3], *(double*)args[4], *(double*)args[5]);
}
static void wrap_glRectd(void* ret, void* const* args) {
    (void)ret;
        glRectd(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3]);
}
static void wrap_glRectf(void* ret, void* const* args) {
    (void)ret;
        glRectf(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glRecti(void* ret, void* const* args) {
    (void)ret;
        glRecti(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glRects(void* ret, void* const* args) {
    (void)ret;
        glRects(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glArrayElement(void* ret, void* const* args) {
    (void)ret;
        glArrayElement(*(int*)args[0]);
}
static void wrap_glPopMatrix(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glPopMatrix();
}
static void wrap_glIndexf(void* ret, void* const* args) {
    (void)ret;
        glIndexf(*(float*)args[0]);
}
static void wrap_glIndexd(void* ret, void* const* args) {
    (void)ret;
        glIndexd(*(double*)args[0]);
}
static void wrap_glIndexi(void* ret, void* const* args) {
    (void)ret;
        glIndexi(*(int*)args[0]);
}
static void wrap_glIndexs(void* ret, void* const* args) {
    (void)ret;
        glIndexs(*(int*)args[0]);
}
static void wrap_glClear(void* ret, void* const* args) {
    (void)ret;
        glClear(*(int*)args[0]);
}
static void wrap_glNormal3b(void* ret, void* const* args) {
    (void)ret;
        glNormal3b(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glEnd(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glEnd();
}
static void wrap_glEvalCoord1f(void* ret, void* const* args) {
    (void)ret;
        glEvalCoord1f(*(float*)args[0]);
}
static void wrap_glEvalCoord2d(void* ret, void* const* args) {
    (void)ret;
        glEvalCoord2d(*(double*)args[0], *(double*)args[1]);
}
static void wrap_glEvalCoord2f(void* ret, void* const* args) {
    (void)ret;
        glEvalCoord2f(*(float*)args[0], *(float*)args[1]);
}
static void wrap_glIsEnabled(void* ret, void* const* args) {
    *(int*)ret =
        glIsEnabled(*(int*)args[0]);
}
static void wrap_glLineWidth(void* ret, void* const* args) {
    (void)ret;
        glLineWidth(*(float*)args[0]);
}
static void wrap_glTexCoord1d(void* ret, void* const* args) {
    (void)ret;
        glTexCoord1d(*(double*)args[0]);
}
static void wrap_glTexCoord1f(void* ret, void* const* args) {
    (void)ret;
        glTexCoord1f(*(float*)args[0]);
}
static void wrap_glTexCoord1i(void* ret, void* const* args) {
    (void)ret;
        glTexCoord1i(*(int*)args[0]);
}
static void wrap_glTexCoord1s(void* ret, void* const* args) {
    (void)ret;
        glTexCoord1s(*(int*)args[0]);
}
static void wrap_glTexCoord2d(void* ret, void* const* args) {
    (void)ret;
        glTexCoord2d(*(double*)args[0], *(double*)args[1]);
}
static void wrap_glTexCoord2f(void* ret, void* const* args) {
    (void)ret;
        glTexCoord2f(*(float*)args[0], *(float*)args[1]);
}
static void wrap_glTexCoord2i(void* ret, void* const* args) {
    (void)ret;
        glTexCoord2i(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glTexCoord2s(void* ret, void* const* args) {
    (void)ret;
        glTexCoord2s(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glTexCoord3d(void* ret, void* const* args) {
    (void)ret;
        glTexCoord3d(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glTexCoord3f(void* ret, void* const* args) {
    (void)ret;
        glTexCoord3f(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glTexCoord3i(void* ret, void* const* args) {
    (void)ret;
        glTexCoord3i(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glLightModeli(void* ret, void* const* args) {
    (void)ret;
        glLightModeli(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glTexCoord3s(void* ret, void* const* args) {
    (void)ret;
        glTexCoord3s(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glPushMatrix(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glPushMatrix();
}
static void wrap_glTexCoord4d(void* ret, void* const* args) {
    (void)ret;
        glTexCoord4d(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3]);
}
static void wrap_glTexCoord4f(void* ret, void* const* args) {
    (void)ret;
        glTexCoord4f(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glTexCoord4i(void* ret, void* const* args) {
    (void)ret;
        glTexCoord4i(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glBlendFunc(void* ret, void* const* args) {
    (void)ret;
        glBlendFunc(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glTexCoord4s(void* ret, void* const* args) {
    (void)ret;
        glTexCoord4s(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glDepthRange(void* ret, void* const* args) {
    (void)ret;
        glDepthRange(*(double*)args[0], *(double*)args[1]);
}
static void wrap_glPopClientAttrib(void* ret, void* const* args) {
    (void)args;
    (void)ret;
        glPopClientAttrib();
}
static void wrap_glRotated(void* ret, void* const* args) {
    (void)ret;
        glRotated(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3]);
}
static void wrap_glRotatef(void* ret, void* const* args) {
    (void)ret;
        glRotatef(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glClearAccum(void* ret, void* const* args) {
    (void)ret;
        glClearAccum(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glLoadName(void* ret, void* const* args) {
    (void)ret;
        glLoadName(*(int*)args[0]);
}
static void wrap_glRasterPos3s(void* ret, void* const* args) {
    (void)ret;
        glRasterPos3s(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glIsList(void* ret, void* const* args) {
    *(int*)ret =
        glIsList(*(int*)args[0]);
}
static void wrap_glColorMask(void* ret, void* const* args) {
    (void)ret;
        glColorMask(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glCopyTexSubImage1D(void* ret, void* const* args) {
    (void)ret;
        glCopyTexSubImage1D(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5]);
}
static void wrap_glCopyTexSubImage2D(void* ret, void* const* args) {
    (void)ret;
        glCopyTexSubImage2D(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3], *(int*)args[4], *(int*)args[5], *(int*)args[6], *(int*)args[7]);
}
static void wrap_glVertex2f(void* ret, void* const* args) {
    (void)ret;
        glVertex2f(*(float*)args[0], *(float*)args[1]);
}
static void wrap_glVertex2i(void* ret, void* const* args) {
    (void)ret;
        glVertex2i(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glVertex2s(void* ret, void* const* args) {
    (void)ret;
        glVertex2s(*(int*)args[0], *(int*)args[1]);
}
static void wrap_glVertex3f(void* ret, void* const* args) {
    (void)ret;
        glVertex3f(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
static void wrap_glVertex3i(void* ret, void* const* args) {
    (void)ret;
        glVertex3i(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glVertex3s(void* ret, void* const* args) {
    (void)ret;
        glVertex3s(*(int*)args[0], *(int*)args[1], *(int*)args[2]);
}
static void wrap_glVertex4d(void* ret, void* const* args) {
    (void)ret;
        glVertex4d(*(double*)args[0], *(double*)args[1], *(double*)args[2], *(double*)args[3]);
}
static void wrap_glVertex4f(void* ret, void* const* args) {
    (void)ret;
        glVertex4f(*(float*)args[0], *(float*)args[1], *(float*)args[2], *(float*)args[3]);
}
static void wrap_glVertex4i(void* ret, void* const* args) {
    (void)ret;
        glVertex4i(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glVertex4s(void* ret, void* const* args) {
    (void)ret;
        glVertex4s(*(int*)args[0], *(int*)args[1], *(int*)args[2], *(int*)args[3]);
}
static void wrap_glIndexMask(void* ret, void* const* args) {
    (void)ret;
        glIndexMask(*(int*)args[0]);
}
static void wrap_glBegin(void* ret, void* const* args) {
    (void)ret;
        glBegin(*(int*)args[0]);
}
static void wrap_glPointSize(void* ret, void* const* args) {
    (void)ret;
        glPointSize(*(float*)args[0]);
}
static void wrap_glTranslated(void* ret, void* const* args) {
    (void)ret;
        glTranslated(*(double*)args[0], *(double*)args[1], *(double*)args[2]);
}
static void wrap_glTranslatef(void* ret, void* const* args) {
    (void)ret;
        glTranslatef(*(float*)args[0], *(float*)args[1], *(float*)args[2]);
}
#define TRIVIAL_FUNCS \
STD2_FUNC("ClearDepth", "", "d", wrap_glClearDepth) \
STD2_FUNC("PixelStoref", "", "i f", wrap_glPixelStoref) \
STD2_FUNC("FrontFace", "", "i", wrap_glFrontFace) \
STD2_FUNC("LoadIdentity", "", "", wrap_glLoadIdentity) \
STD2_FUNC("LogicOp", "", "i", wrap_glLogicOp) \
STD2_FUNC("ColorMaterial", "", "i i", wrap_glColorMaterial) \
STD2_FUNC("TexEnvf", "", "i i f", wrap_glTexEnvf) \
STD2_FUNC("TexEnvi", "", "i i i", wrap_glTexEnvi) \
STD2_FUNC("StencilOp", "", "i i i", wrap_glStencilOp) \
STD2_FUNC("RenderMode", "i", "i", wrap_glRenderMode) \
STD2_FUNC("PixelStorei", "", "i i", wrap_glPixelStorei) \
STD2_FUNC("CullFace", "", "i", wrap_glCullFace) \
STD2_FUNC("Normal3d", "", "d d d", wrap_glNormal3d) \
STD2_FUNC("Normal3f", "", "f f f", wrap_glNormal3f) \
STD2_FUNC("Normal3i", "", "i i i", wrap_glNormal3i) \
STD2_FUNC("Color3ui", "", "i i i", wrap_glColor3ui) \
STD2_FUNC("Color3us", "", "i i i", wrap_glColor3us) \
STD2_FUNC("Viewport", "", "i i i i", wrap_glViewport) \
STD2_FUNC("EndList", "", "", wrap_glEndList) \
STD2_FUNC("Indexub", "", "i", wrap_glIndexub) \
STD2_FUNC("AlphaFunc", "", "i f", wrap_glAlphaFunc) \
STD2_FUNC("PopAttrib", "", "", wrap_glPopAttrib) \
STD2_FUNC("ReadBuffer", "", "i", wrap_glReadBuffer) \
STD2_FUNC("PixelZoom", "", "f f", wrap_glPixelZoom) \
STD2_FUNC("Ortho", "", "d d d d d d", wrap_glOrtho) \
STD2_FUNC("Scissor", "", "i i i i", wrap_glScissor) \
STD2_FUNC("EvalCoord1d", "", "d", wrap_glEvalCoord1d) \
STD2_FUNC("BindTexture", "", "i i", wrap_glBindTexture) \
STD2_FUNC("DrawArrays", "", "i i i", wrap_glDrawArrays) \
STD2_FUNC("PopName", "", "", wrap_glPopName) \
STD2_FUNC("TexGenf", "", "i i f", wrap_glTexGenf) \
STD2_FUNC("TexGeni", "", "i i i", wrap_glTexGeni) \
STD2_FUNC("TexParameterf", "", "i i f", wrap_glTexParameterf) \
STD2_FUNC("TexParameteri", "", "i i i", wrap_glTexParameteri) \
STD2_FUNC("TexGend", "", "i i d", wrap_glTexGend) \
STD2_FUNC("MapGrid1d", "", "i d d", wrap_glMapGrid1d) \
STD2_FUNC("MapGrid1f", "", "i f f", wrap_glMapGrid1f) \
STD2_FUNC("MapGrid2d", "", "i d d i d d", wrap_glMapGrid2d) \
STD2_FUNC("MapGrid2f", "", "i f f i f f", wrap_glMapGrid2f) \
STD2_FUNC("Accum", "", "i f", wrap_glAccum) \
STD2_FUNC("ShadeModel", "", "i", wrap_glShadeModel) \
STD2_FUNC("PolygonMode", "", "i i", wrap_glPolygonMode) \
STD2_FUNC("ListBase", "", "i", wrap_glListBase) \
STD2_FUNC("NewList", "", "i i", wrap_glNewList) \
STD2_FUNC("InitNames", "", "", wrap_glInitNames) \
STD2_FUNC("CopyTexImage1D", "", "i i i i i i i", wrap_glCopyTexImage1D) \
STD2_FUNC("CopyTexImage2D", "", "i i i i i i i i", wrap_glCopyTexImage2D) \
STD2_FUNC("EvalMesh1", "", "i i i", wrap_glEvalMesh1) \
STD2_FUNC("EvalMesh2", "", "i i i i i", wrap_glEvalMesh2) \
STD2_FUNC("DrawBuffer", "", "i", wrap_glDrawBuffer) \
STD2_FUNC("Lightf", "", "i i f", wrap_glLightf) \
STD2_FUNC("RasterPos2d", "", "d d", wrap_glRasterPos2d) \
STD2_FUNC("RasterPos2f", "", "f f", wrap_glRasterPos2f) \
STD2_FUNC("RasterPos2s", "", "i i", wrap_glRasterPos2s) \
STD2_FUNC("RasterPos3d", "", "d d d", wrap_glRasterPos3d) \
STD2_FUNC("RasterPos3f", "", "f f f", wrap_glRasterPos3f) \
STD2_FUNC("RasterPos3i", "", "i i i", wrap_glRasterPos3i) \
STD2_FUNC("PushAttrib", "", "i", wrap_glPushAttrib) \
STD2_FUNC("DepthFunc", "", "i", wrap_glDepthFunc) \
STD2_FUNC("RasterPos4d", "", "d d d d", wrap_glRasterPos4d) \
STD2_FUNC("RasterPos4f", "", "f f f f", wrap_glRasterPos4f) \
STD2_FUNC("RasterPos4i", "", "i i i i", wrap_glRasterPos4i) \
STD2_FUNC("RasterPos4s", "", "i i i i", wrap_glRasterPos4s) \
STD2_FUNC("StencilFunc", "", "i i i", wrap_glStencilFunc) \
STD2_FUNC("EnableClientState", "", "i", wrap_glEnableClientState) \
STD2_FUNC("DepthMask", "", "i", wrap_glDepthMask) \
STD2_FUNC("Color3b", "", "i i i", wrap_glColor3b) \
STD2_FUNC("Color3f", "", "f f f", wrap_glColor3f) \
STD2_FUNC("Color3i", "", "i i i", wrap_glColor3i) \
STD2_FUNC("Color3s", "", "i i i", wrap_glColor3s) \
STD2_FUNC("Color4ui", "", "i i i i", wrap_glColor4ui) \
STD2_FUNC("Color4us", "", "i i i i", wrap_glColor4us) \
STD2_FUNC("Color4b", "", "i i i i", wrap_glColor4b) \
STD2_FUNC("Color4d", "", "d d d d", wrap_glColor4d) \
STD2_FUNC("Color4f", "", "f f f f", wrap_glColor4f) \
STD2_FUNC("Color4i", "", "i i i i", wrap_glColor4i) \
STD2_FUNC("Color4s", "", "i i i i", wrap_glColor4s) \
STD2_FUNC("StencilMask", "", "i", wrap_glStencilMask) \
STD2_FUNC("MatrixMode", "", "i", wrap_glMatrixMode) \
STD2_FUNC("PolygonOffset", "", "f f", wrap_glPolygonOffset) \
STD2_FUNC("Fogf", "", "i f", wrap_glFogf) \
STD2_FUNC("Fogi", "", "i i", wrap_glFogi) \
STD2_FUNC("EdgeFlag", "", "i", wrap_glEdgeFlag) \
STD2_FUNC("DisableClientState", "", "i", wrap_glDisableClientState) \
STD2_FUNC("PixelTransferf", "", "i f", wrap_glPixelTransferf) \
STD2_FUNC("Flush", "", "", wrap_glFlush) \
STD2_FUNC("Enable", "", "i", wrap_glEnable) \
STD2_FUNC("ClearIndex", "", "f", wrap_glClearIndex) \
STD2_FUNC("Normal3s", "", "i i i", wrap_glNormal3s) \
STD2_FUNC("LineStipple", "", "i i", wrap_glLineStipple) \
STD2_FUNC("Finish", "", "", wrap_glFinish) \
STD2_FUNC("Hint", "", "i i", wrap_glHint) \
STD2_FUNC("Color3d", "", "d d d", wrap_glColor3d) \
STD2_FUNC("Lighti", "", "i i i", wrap_glLighti) \
STD2_FUNC("PassThrough", "", "f", wrap_glPassThrough) \
STD2_FUNC("Color4ub", "", "i i i i", wrap_glColor4ub) \
STD2_FUNC("RasterPos2i", "", "i i", wrap_glRasterPos2i) \
STD2_FUNC("Scaled", "", "d d d", wrap_glScaled) \
STD2_FUNC("Scalef", "", "f f f", wrap_glScalef) \
STD2_FUNC("Vertex2d", "", "d d", wrap_glVertex2d) \
STD2_FUNC("Materialf", "", "i i f", wrap_glMaterialf) \
STD2_FUNC("Materiali", "", "i i i", wrap_glMateriali) \
STD2_FUNC("GenLists", "i", "i", wrap_glGenLists) \
STD2_FUNC("GetError", "i", "", wrap_glGetError) \
STD2_FUNC("ClearColor", "", "f f f f", wrap_glClearColor) \
STD2_FUNC("PushName", "", "i", wrap_glPushName) \
STD2_FUNC("Color3ub", "", "i i i", wrap_glColor3ub) \
STD2_FUNC("IsTexture", "i", "i", wrap_glIsTexture) \
STD2_FUNC("Vertex3d", "", "d d d", wrap_glVertex3d) \
STD2_FUNC("Disable", "", "i", wrap_glDisable) \
STD2_FUNC("LightModelf", "", "i f", wrap_glLightModelf) \
STD2_FUNC("ClearStencil", "", "i", wrap_glClearStencil) \
STD2_FUNC("PixelTransferi", "", "i i", wrap_glPixelTransferi) \
STD2_FUNC("CopyPixels", "", "i i i i i", wrap_glCopyPixels) \
STD2_FUNC("CallList", "", "i", wrap_glCallList) \
STD2_FUNC("EvalPoint1", "", "i", wrap_glEvalPoint1) \
STD2_FUNC("EvalPoint2", "", "i i", wrap_glEvalPoint2) \
STD2_FUNC("PushClientAttrib", "", "i", wrap_glPushClientAttrib) \
STD2_FUNC("DeleteLists", "", "i i", wrap_glDeleteLists) \
STD2_FUNC("Frustum", "", "d d d d d d", wrap_glFrustum) \
STD2_FUNC("Rectd", "", "d d d d", wrap_glRectd) \
STD2_FUNC("Rectf", "", "f f f f", wrap_glRectf) \
STD2_FUNC("Recti", "", "i i i i", wrap_glRecti) \
STD2_FUNC("Rects", "", "i i i i", wrap_glRects) \
STD2_FUNC("ArrayElement", "", "i", wrap_glArrayElement) \
STD2_FUNC("PopMatrix", "", "", wrap_glPopMatrix) \
STD2_FUNC("Indexf", "", "f", wrap_glIndexf) \
STD2_FUNC("Indexd", "", "d", wrap_glIndexd) \
STD2_FUNC("Indexi", "", "i", wrap_glIndexi) \
STD2_FUNC("Indexs", "", "i", wrap_glIndexs) \
STD2_FUNC("Clear", "", "i", wrap_glClear) \
STD2_FUNC("Normal3b", "", "i i i", wrap_glNormal3b) \
STD2_FUNC("End", "", "", wrap_glEnd) \
STD2_FUNC("EvalCoord1f", "", "f", wrap_glEvalCoord1f) \
STD2_FUNC("EvalCoord2d", "", "d d", wrap_glEvalCoord2d) \
STD2_FUNC("EvalCoord2f", "", "f f", wrap_glEvalCoord2f) \
STD2_FUNC("IsEnabled", "i", "i", wrap_glIsEnabled) \
STD2_FUNC("LineWidth", "", "f", wrap_glLineWidth) \
STD2_FUNC("TexCoord1d", "", "d", wrap_glTexCoord1d) \
STD2_FUNC("TexCoord1f", "", "f", wrap_glTexCoord1f) \
STD2_FUNC("TexCoord1i", "", "i", wrap_glTexCoord1i) \
STD2_FUNC("TexCoord1s", "", "i", wrap_glTexCoord1s) \
STD2_FUNC("TexCoord2d", "", "d d", wrap_glTexCoord2d) \
STD2_FUNC("TexCoord2f", "", "f f", wrap_glTexCoord2f) \
STD2_FUNC("TexCoord2i", "", "i i", wrap_glTexCoord2i) \
STD2_FUNC("TexCoord2s", "", "i i", wrap_glTexCoord2s) \
STD2_FUNC("TexCoord3d", "", "d d d", wrap_glTexCoord3d) \
STD2_FUNC("TexCoord3f", "", "f f f", wrap_glTexCoord3f) \
STD2_FUNC("TexCoord3i", "", "i i i", wrap_glTexCoord3i) \
STD2_FUNC("LightModeli", "", "i i", wrap_glLightModeli) \
STD2_FUNC("TexCoord3s", "", "i i i", wrap_glTexCoord3s) \
STD2_FUNC("PushMatrix", "", "", wrap_glPushMatrix) \
STD2_FUNC("TexCoord4d", "", "d d d d", wrap_glTexCoord4d) \
STD2_FUNC("TexCoord4f", "", "f f f f", wrap_glTexCoord4f) \
STD2_FUNC("TexCoord4i", "", "i i i i", wrap_glTexCoord4i) \
STD2_FUNC("BlendFunc", "", "i i", wrap_glBlendFunc) \
STD2_FUNC("TexCoord4s", "", "i i i i", wrap_glTexCoord4s) \
STD2_FUNC("DepthRange", "", "d d", wrap_glDepthRange) \
STD2_FUNC("PopClientAttrib", "", "", wrap_glPopClientAttrib) \
STD2_FUNC("Rotated", "", "d d d d", wrap_glRotated) \
STD2_FUNC("Rotatef", "", "f f f f", wrap_glRotatef) \
STD2_FUNC("ClearAccum", "", "f f f f", wrap_glClearAccum) \
STD2_FUNC("LoadName", "", "i", wrap_glLoadName) \
STD2_FUNC("RasterPos3s", "", "i i i", wrap_glRasterPos3s) \
STD2_FUNC("IsList", "i", "i", wrap_glIsList) \
STD2_FUNC("ColorMask", "", "i i i i", wrap_glColorMask) \
STD2_FUNC("CopyTexSubImage1D", "", "i i i i i i", wrap_glCopyTexSubImage1D) \
STD2_FUNC("CopyTexSubImage2D", "", "i i i i i i i i", wrap_glCopyTexSubImage2D) \
STD2_FUNC("Vertex2f", "", "f f", wrap_glVertex2f) \
STD2_FUNC("Vertex2i", "", "i i", wrap_glVertex2i) \
STD2_FUNC("Vertex2s", "", "i i", wrap_glVertex2s) \
STD2_FUNC("Vertex3f", "", "f f f", wrap_glVertex3f) \
STD2_FUNC("Vertex3i", "", "i i i", wrap_glVertex3i) \
STD2_FUNC("Vertex3s", "", "i i i", wrap_glVertex3s) \
STD2_FUNC("Vertex4d", "", "d d d d", wrap_glVertex4d) \
STD2_FUNC("Vertex4f", "", "f f f f", wrap_glVertex4f) \
STD2_FUNC("Vertex4i", "", "i i i i", wrap_glVertex4i) \
STD2_FUNC("Vertex4s", "", "i i i i", wrap_glVertex4s) \
STD2_FUNC("IndexMask", "", "i", wrap_glIndexMask) \
STD2_FUNC("Begin", "", "i", wrap_glBegin) \
STD2_FUNC("PointSize", "", "f", wrap_glPointSize) \
STD2_FUNC("Translated", "", "d d d", wrap_glTranslated) \
STD2_FUNC("Translatef", "", "f f f", wrap_glTranslatef) \

