/*
 * Web UI Routes
 *
 * Compressed Size Summary:
 * ui_app_immutable_assets_css: 8,873 bytes
 * ui_html: 3,245 bytes
 * ui_app_immutable_entry_js: 44,975 bytes
 * ui_app_immutable_nodes_js: 514 bytes
 * ui_svg: 456 bytes
 * Total: 58,063 bytes
 */

#pragma once

#include <ESPAsyncWebServer.h>
#include "ui_app_immutable_assets_css.h"
#include "ui_html.h"
#include "ui_app_immutable_entry_js.h"
#include "ui_app_immutable_nodes_js.h"
#include "ui_svg.h"

inline void setupRoutes(AsyncWebServer* server) {
    server->on("/app/immutable/assets/internal.DN2mWWgh.css", HTTP_GET, serveAppImmutableAssetsInternalDn2mWWghCss);
    server->on("/app/immutable/assets/start.BfkQNPT2.css", HTTP_GET, serveAppImmutableAssetsStartBfkQnpt2Css);
    server->on("/app/immutable/entry/app.CJoQbx-l.js", HTTP_GET, serveAppImmutableEntryAppCJoQbxLJs);
    server->on("/app/immutable/entry/start.CLcDNVJw.js", HTTP_GET, serveAppImmutableEntryStartCLcDnvJwJs);
    server->on("/app/immutable/nodes/0.9q8k1tVo.js", HTTP_GET, serveAppImmutableNodes_0_9q8k1tVoJs);
    server->on("/app/immutable/nodes/1.BQ6hJWHE.js", HTTP_GET, serveAppImmutableNodes_1Bq6hJwheJs);
    server->on("/app/immutable/nodes/2.D_F0i3iK.js", HTTP_GET, serveAppImmutableNodes_2DF0i3iKJs);
    server->on("/app/immutable/nodes/3.BfMcg70e.js", HTTP_GET, serveAppImmutableNodes_3BfMcg70eJs);
    server->on("/app/immutable/nodes/4.C9ODuP5P.js", HTTP_GET, serveAppImmutableNodes_4C9ODuP5PJs);
    server->on("/app/immutable/nodes/5.Dhwo_IU2.js", HTTP_GET, serveAppImmutableNodes_5DhwoIu2Js);
    server->on("/app/immutable/nodes/6.D7de1A_V.js", HTTP_GET, serveAppImmutableNodes_6D7de1AVJs);
    server->on("/favicon.svg", HTTP_GET, serveFaviconSvg);
    // HTML routes
    server->on("/devices", HTTP_GET, serveDevicesHtml);
    server->on("/devices.html", HTTP_GET, serveDevicesHtml);
    server->on("/fingerprints", HTTP_GET, serveFingerprintsHtml);
    server->on("/fingerprints.html", HTTP_GET, serveFingerprintsHtml);
    server->on("/", HTTP_GET, serveIndexHtml);
    server->on("/network", HTTP_GET, serveNetworkHtml);
    server->on("/network.html", HTTP_GET, serveNetworkHtml);
    server->on("/settings", HTTP_GET, serveSettingsHtml);
    server->on("/settings.html", HTTP_GET, serveSettingsHtml);
}
