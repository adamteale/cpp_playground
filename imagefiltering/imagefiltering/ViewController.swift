//
//  ViewController.swift
//  imagefiltering
//
//  Created by adam on 7/26/18.
//  Copyright © 2018 adam. All rights reserved.
//

import Cocoa
import AVFoundation
import AVKit


class ViewController: NSViewController {

    var player : AVPlayer?
    @IBOutlet weak var playerView: AVPlayerView!
    var fileurl : URL?
    
    
    override func viewDidLoad() {
        super.viewDidLoad()
    }

    override var representedObject: Any? {
        didSet {
        // Update the view, if already loaded.
        }
    }

    
    
    @IBAction func browseFile(sender: AnyObject) {
        
        let dialog = NSOpenPanel();
        
        dialog.title                   = "Choose a .txt file";
        dialog.showsResizeIndicator    = true;
        dialog.showsHiddenFiles        = false;
        dialog.canChooseDirectories    = true;
        dialog.canCreateDirectories    = true;
        dialog.allowsMultipleSelection = false;
        dialog.allowedFileTypes        = ["mov"];
        
        if (dialog.runModal() == NSApplication.ModalResponse.OK) {
            let result = dialog.url // Pathname of the file
            
            if (result != nil) {
                self.fileurl = result!
            }
        } else {
            // User clicked on "Cancel"
            return
        }
        
    }

    
    func initialisePlayer(){
        if self.fileurl != nil  {
            self.player = AVPlayer.init(url: self.fileurl!)
            self.playerView.player = self.player
        }
        

    }
    
}

