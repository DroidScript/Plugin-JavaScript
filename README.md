# Plugin-JavaScript
Basic example of a pure JavaScript plugin for DroidScript

You simply need to drop the MyPlugin.zip file into a folder called /sdcard/DroidScript/Plugins on your device and DroidScript will import it into the plugins list along with the sample documentation (after you restart DroidScript).

When you come to renaming and making your own plugins, please make sure you use the same format and case for file names as those shown in this sample.

Note: You can make sub folders in the zip file for your documentation images etc, these files will not be included in APK builds that use your plugin. (only the top level files are carried across into APKs)

More sophisticated plugins can be made by wrapping a DroidScript webview and/or including popular js libs.  Many NodeJS plugins can also be converted into DroidScript plugins by using Browserify.
