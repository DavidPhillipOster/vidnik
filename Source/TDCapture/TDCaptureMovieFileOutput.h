//
//  TDCaptureMovieFileOutput.h
//  VideoRecorder
//
//  Created by David Phillip Oster on 2/14/08.
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


// Wrap OS X 10.5 only QTKit class QTCaptureMovieFileOutput, 
// so we can re-implement for Tiger
@interface TDCaptureMovieFileOutput : NSObject {
 @private
  id mI;  // implementation
}

- (void)setDelegate:(id)delegate;
- (void)recordToOutputFileURL:(NSURL *)url;

- (NSTimeInterval)recordedDuration;
- (UInt64)recordedFileSize;

@end
// for implementors. Client programs should not call these.
@interface TDCaptureMovieFileOutput(Protected) 
- (id)impl;
- (id)initWithImpl:(id) impl;
@end
