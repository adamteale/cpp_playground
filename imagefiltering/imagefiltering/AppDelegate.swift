//
//  AppDelegate.swift
//  imagefiltering
//
//  Created by adam on 7/26/18.
//  Copyright © 2018 adam. All rights reserved.
//

import Cocoa

@NSApplicationMain
class AppDelegate: NSObject, NSApplicationDelegate {



    func applicationDidFinishLaunching(_ aNotification: Notification) {
        // Insert code here to initialize your application
    }

    func applicationWillTerminate(_ aNotification: Notification) {
        // Insert code here to tear down your application
    }

    @IBAction func openDocument(_ sender: Any) {
        let openPanel = NSOpenPanel()
        openPanel.begin(completionHandler: { (result) -> () in
            if result == .OK {
                if let resultString = openPanel.url?.absoluteString {
                    let videowindow = NSApplication.shared.mainWindow
                    print(videowindow!.contentViewController!.childViewControllers.count)
//                    if let vw = videowindow?.contentViewController?.childViewControllers[0] as! ViewController {
//                        vw.fileurl = URL(fileURLWithPath: resultString)
//                        vw.initialisePlayer()
//                    }

                }
            }
        })
    }
    
}

