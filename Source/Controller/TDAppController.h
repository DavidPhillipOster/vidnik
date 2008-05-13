//
//  TDAppController.h
//  Vidnik
//
//  Created by David Phillip Oster on 2/13/08.
//  Copyright 2008 Google Inc. 
// Licensed under the Apache License, Version 2.0 (the "License"); you may not
// use this file except in compliance with the License.  You may obtain a copy
// of the License at
// 
// http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
// WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
// License for the specific language governing permissions and limitations under
// the License.

//

#import <Cocoa/Cocoa.h>

@class TDConfiguration;
@class SUUpdater;

@interface TDAppController : NSObject {
  IBOutlet SUUpdater *mUpdater;
  TDConfiguration *mConfig;
}

- (TDConfiguration *)config;
- (void)setConfig:(TDConfiguration *)config;

- (BOOL)applicationShouldOpenUntitledFile:(NSApplication *)sender;

- (IBAction)showPreferences:(id)sender;
- (IBAction)checkForUpdates:(id)sender;

@end

