// This file implements the IOleInPlaceSiteWindowless Interface and Gateway for Python.
// Generated by makegw.py

#include "axcontrol_pch.h"
#include "PyIOleWindow.h"
#include "PyIOleInPlaceSite.h"
#include "PyIOleInPlaceSiteEx.h"
#include "PyIOleInPlaceSiteWindowless.h"

// @doc - This file contains autoduck documentation
// ---------------------------------------------------
//
// Interface Implementation

PyIOleInPlaceSiteWindowless::PyIOleInPlaceSiteWindowless(IUnknown *pdisp) : PyIOleInPlaceSiteEx(pdisp)
{
    ob_type = &type;
}

PyIOleInPlaceSiteWindowless::~PyIOleInPlaceSiteWindowless() {}

/* static */ IOleInPlaceSiteWindowless *PyIOleInPlaceSiteWindowless::GetI(PyObject *self)
{
    return (IOleInPlaceSiteWindowless *)PyIOleInPlaceSiteEx::GetI(self);
}

// @pymethod |PyIOleInPlaceSiteWindowless|CanWindowlessActivate|Description of CanWindowlessActivate.
PyObject *PyIOleInPlaceSiteWindowless::CanWindowlessActivate(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    if (!PyArg_ParseTuple(args, ":CanWindowlessActivate"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->CanWindowlessActivate();
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|GetCapture|Description of GetCapture.
PyObject *PyIOleInPlaceSiteWindowless::GetCapture(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    if (!PyArg_ParseTuple(args, ":GetCapture"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->GetCapture();
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|SetCapture|Description of SetCapture.
PyObject *PyIOleInPlaceSiteWindowless::SetCapture(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    // @pyparm int|fCapture||Description for fCapture
    BOOL fCapture;
    if (!PyArg_ParseTuple(args, "i:SetCapture", &fCapture))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->SetCapture(fCapture);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|GetFocus|Description of GetFocus.
PyObject *PyIOleInPlaceSiteWindowless::GetFocus(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    if (!PyArg_ParseTuple(args, ":GetFocus"))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->GetFocus();
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|SetFocus|Description of SetFocus.
PyObject *PyIOleInPlaceSiteWindowless::SetFocus(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    // @pyparm int|fFocus||Description for fFocus
    BOOL fFocus;
    if (!PyArg_ParseTuple(args, "i:SetFocus", &fFocus))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->SetFocus(fFocus);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|GetDC|Description of GetDC.
PyObject *PyIOleInPlaceSiteWindowless::GetDC(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    RECT r;
    // @pyparm int|grfFlags||Description for grfFlags
    // @pyparm (int, int, int, int)|rect||
    DWORD grfFlags;
    HDC phDC;
    if (!PyArg_ParseTuple(args, "(llll)l:GetDC", &r.left, &r.top, &r.right, &r.bottom, &grfFlags))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->GetDC(&r, grfFlags, &phDC);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);

    PyObject *pyretval = Py_BuildValue("l", phDC);
    return pyretval;
}

// @pymethod |PyIOleInPlaceSiteWindowless|ReleaseDC|Description of ReleaseDC.
PyObject *PyIOleInPlaceSiteWindowless::ReleaseDC(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    // @pyparm HDC|hDC||Description for hDC
    HDC hDC;
    if (!PyArg_ParseTuple(args, "l:ReleaseDC", &hDC))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->ReleaseDC(hDC);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|InvalidateRect|Description of InvalidateRect.
PyObject *PyIOleInPlaceSiteWindowless::InvalidateRect(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    RECT r;
    // @pyparm (int, int, int, int)|rect||
    // @pyparm int|fErase||Description for fErase
    BOOL fErase;
    if (!PyArg_ParseTuple(args, "(llll)i:InvalidateRect", &r.left, &r.top, &r.right, &r.bottom, &fErase))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->InvalidateRect(&r, fErase);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|InvalidateRgn|Description of InvalidateRgn.
PyObject *PyIOleInPlaceSiteWindowless::InvalidateRgn(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    LONG hRGN;
    // @pyparm int|hRgn||Handle to a region
    // @pyparm int|fErase||Description for fErase
    BOOL fErase;
    if (!PyArg_ParseTuple(args, "li:InvalidateRgn", &hRGN, &fErase))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->InvalidateRgn((HRGN)hRGN, fErase);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|ScrollRect|Description of ScrollRect.
PyObject *PyIOleInPlaceSiteWindowless::ScrollRect(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    // @pyparm int|dx||Description for dx
    // @pyparm int|dy||Description for dy
    RECT rectScroll;
    RECT rectClip;
    INT dx;
    INT dy;
    if (!PyArg_ParseTuple(args, "ii(llll)(llll):ScrollRect", &dx, &dy, &rectScroll.left, &rectScroll.top,
                          &rectScroll.right, &rectScroll.bottom, &rectClip.left, &rectClip.top, &rectClip.right,
                          &rectClip.bottom))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->ScrollRect(dx, dy, &rectScroll, &rectClip);
    PY_INTERFACE_POSTCALL;
    if (FAILED(hr))
        return OleSetOleError(hr);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|AdjustRect|Description of AdjustRect.
PyObject *PyIOleInPlaceSiteWindowless::AdjustRect(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    RECT r;
    if (!PyArg_ParseTuple(args, "(llll):AdjustRect", &r.left, &r.top, &r.right, &r.bottom))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->AdjustRect(&r);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);
    return Py_BuildValue("(llll)", r.left, r.top, r.right, r.bottom);
    Py_INCREF(Py_None);
    return Py_None;
}

// @pymethod |PyIOleInPlaceSiteWindowless|OnDefWindowMessage|Description of OnDefWindowMessage.
PyObject *PyIOleInPlaceSiteWindowless::OnDefWindowMessage(PyObject *self, PyObject *args)
{
    IOleInPlaceSiteWindowless *pIOIPSW = GetI(self);
    if (pIOIPSW == NULL)
        return NULL;
    // @pyparm int|msg||Description for msg
    // @pyparm int|wParam||Description for wParam
    // @pyparm long|lParam||Description for lParam
    UINT msg;
    WPARAM wParam;
    LPARAM lParam;
    LRESULT plResult;
    if (!PyArg_ParseTuple(args, "iil:OnDefWindowMessage", &msg, &wParam, &lParam))
        return NULL;
    HRESULT hr;
    PY_INTERFACE_PRECALL;
    hr = pIOIPSW->OnDefWindowMessage(msg, wParam, lParam, &plResult);
    PY_INTERFACE_POSTCALL;

    if (FAILED(hr))
        return OleSetOleError(hr);

    PyObject *pyretval = Py_BuildValue("l", plResult);
    return pyretval;
}

// @object PyIOleInPlaceSiteWindowless|Description of the interface
static struct PyMethodDef PyIOleInPlaceSiteWindowless_methods[] = {
    {"CanWindowlessActivate", PyIOleInPlaceSiteWindowless::CanWindowlessActivate,
     1},  // @pymeth CanWindowlessActivate|Description of CanWindowlessActivate
    {"GetCapture", PyIOleInPlaceSiteWindowless::GetCapture, 1},  // @pymeth GetCapture|Description of GetCapture
    {"SetCapture", PyIOleInPlaceSiteWindowless::SetCapture, 1},  // @pymeth SetCapture|Description of SetCapture
    {"GetFocus", PyIOleInPlaceSiteWindowless::GetFocus, 1},      // @pymeth GetFocus|Description of GetFocus
    {"SetFocus", PyIOleInPlaceSiteWindowless::SetFocus, 1},      // @pymeth SetFocus|Description of SetFocus
    {"GetDC", PyIOleInPlaceSiteWindowless::GetDC, 1},            // @pymeth GetDC|Description of GetDC
    {"ReleaseDC", PyIOleInPlaceSiteWindowless::ReleaseDC, 1},    // @pymeth ReleaseDC|Description of ReleaseDC
    {"InvalidateRect", PyIOleInPlaceSiteWindowless::InvalidateRect,
     1},  // @pymeth InvalidateRect|Description of InvalidateRect
    {"InvalidateRgn", PyIOleInPlaceSiteWindowless::InvalidateRgn,
     1},                                                         // @pymeth InvalidateRgn|Description of InvalidateRgn
    {"ScrollRect", PyIOleInPlaceSiteWindowless::ScrollRect, 1},  // @pymeth ScrollRect|Description of ScrollRect
    {"AdjustRect", PyIOleInPlaceSiteWindowless::AdjustRect, 1},  // @pymeth AdjustRect|Description of AdjustRect
    {"OnDefWindowMessage", PyIOleInPlaceSiteWindowless::OnDefWindowMessage,
     1},  // @pymeth OnDefWindowMessage|Description of OnDefWindowMessage
    {NULL}};

PyComTypeObject PyIOleInPlaceSiteWindowless::type("PyIOleInPlaceSiteWindowless", &PyIOleInPlaceSiteEx::type,
                                                  sizeof(PyIOleInPlaceSiteWindowless),
                                                  PyIOleInPlaceSiteWindowless_methods,
                                                  GET_PYCOM_CTOR(PyIOleInPlaceSiteWindowless));
// ---------------------------------------------------
//
// Gateway Implementation
STDMETHODIMP PyGOleInPlaceSiteWindowless::CanWindowlessActivate(void)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("CanWindowlessActivate", NULL);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::GetCapture(void)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("GetCapture", NULL);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::SetCapture(
    /* [in] */ BOOL fCapture)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("SetCapture", NULL, "i", fCapture);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::GetFocus(void)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("GetFocus", NULL);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::SetFocus(
    /* [in] */ BOOL fFocus)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("SetFocus", NULL, "i", fFocus);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::GetDC(
    /* [in] */ LPCRECT pRect,
    /* [in] */ DWORD grfFlags,
    /* [out] */ HDC __RPC_FAR *phDC)
{
    PY_GATEWAY_METHOD;
    PyObject *result;
    HRESULT hr =
        InvokeViaPolicy("GetDC", &result, "(llll)l", pRect->left, pRect->top, pRect->right, pRect->bottom, grfFlags);
    if (FAILED(hr))
        return hr;
    // Process the Python results, and convert back to the real params
    if (!PyArg_Parse(result, "l", phDC))
        return PyCom_HandlePythonFailureToCOM(/*pexcepinfo*/);
    Py_DECREF(result);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::ReleaseDC(
    /* [in] */ HDC hDC)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("ReleaseDC", NULL, "l", hDC);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::InvalidateRect(
    /* [in] */ LPCRECT pRect,
    /* [in] */ BOOL fErase)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("InvalidateRect", NULL, "(llll)i", pRect->left, pRect->top, pRect->right,
                                 pRect->bottom, fErase);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::InvalidateRgn(
    /* [in] */ HRGN hRGN,
    /* [in] */ BOOL fErase)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("InvalidateRgn", NULL, "li", (long)hRGN, fErase);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::ScrollRect(
    /* [in] */ INT dx,
    /* [in] */ INT dy,
    /* [in] */ LPCRECT pRectScroll,
    /* [in] */ LPCRECT pRectClip)
{
    PY_GATEWAY_METHOD;
    HRESULT hr = InvokeViaPolicy("ScrollRect", NULL, "ii(llll)(llll)", dx, dy, pRectScroll->left, pRectScroll->top,
                                 pRectScroll->right, pRectScroll->bottom, pRectClip->left, pRectClip->top,
                                 pRectClip->right, pRectClip->bottom);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::AdjustRect(
    /* [out][in] */ LPRECT prc)
{
    PY_GATEWAY_METHOD;
    PyObject *result;
    HRESULT hr = InvokeViaPolicy("AdjustRect", &result, "(llll)", prc->left, prc->top, prc->right, prc->bottom);
    if (FAILED(hr))
        return hr;
    // Process the Python results, and convert back to the real params
    // *** The output argument prc of type "LPRECT" was not processed ***
    //     The type 'LPRECT' (prc) is unknown.
    Py_DECREF(result);
    return hr;
}

STDMETHODIMP PyGOleInPlaceSiteWindowless::OnDefWindowMessage(
    /* [in] */ UINT msg,
    /* [in] */ WPARAM wParam,
    /* [in] */ LPARAM lParam,
    /* [out] */ LRESULT __RPC_FAR *plResult)
{
    PY_GATEWAY_METHOD;
    PyObject *result;
    HRESULT hr = InvokeViaPolicy("OnDefWindowMessage", &result, "iil", msg, wParam, lParam);
    if (FAILED(hr))
        return hr;
    // Process the Python results, and convert back to the real params
    if (!PyArg_Parse(result, "l", plResult))
        return PyCom_HandlePythonFailureToCOM(/*pexcepinfo*/);
    Py_DECREF(result);
    return hr;
}
