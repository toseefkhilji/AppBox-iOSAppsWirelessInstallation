//
//  PreferencesViewController.h
//  AppBox
//
//  Created by Vineet Choudhary on 27/03/17.
//  Copyright © 2017 Developer Insider. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PreferencesViewController : NSViewController {
    __weak IBOutlet NSPathControl *pathBuild;
    __weak IBOutlet NSPathControl *pathXCode;
    __weak IBOutlet NSButton *uploadSymbolButton;
    __weak IBOutlet NSButton *uploadBitCodeButton;
    __weak IBOutlet NSButton *compileBitCodeButton;
    __weak IBOutlet NSComboBox *chunkSizeComboBox;
    __weak IBOutlet NSButton *downloadIPAButton;
    __weak IBOutlet NSButton *moreDetailsButton;
    __weak IBOutlet NSButton *showPerviousBuildsButton;
}

- (IBAction)buildPathHandler:(NSPathControl *)sender;
- (IBAction)xcodePathHandler:(NSPathControl *)sender;

- (IBAction)compileBitcodeCheckBokValueChanged:(NSButton *)sender;
- (IBAction)appStoreBitcodeCheckBokValueChanged:(NSButton *)sender;
- (IBAction)appStoreSymbolsFileCheckBokValueChanged:(NSButton *)sender;
- (IBAction)chunckSizeComboBoxValueChanged:(NSComboBox *)sender;
- (IBAction)downloadIPACheckBoxValueChanged:(NSButton *)sender;
- (IBAction)moreDetailsCheckBoxValueChanged:(NSButton *)sender;
- (IBAction)showPreviousVersionCheckBoxValueChanged:(NSButton *)sender;


@end
