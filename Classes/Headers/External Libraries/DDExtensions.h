/*
 * Copyright (c) 2007-2009 Dave Dribin
 * 
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy,
 * modify, merge, publish, distribute, sublicense, and/or sell copies
 * of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#import "TextualApplication.h"

@interface NSObject (DDExtensions)
- (id)iomt TEXTUAL_DEPRECATED("Use -performBlockOnMainThread: instead"); // Invoke On Main Thread
- (id)invokeOnThread:(NSThread *)thread TEXTUAL_DEPRECATED("This method is considered unsafe and may be removed in a future update");
- (id)invokeOnMainThread TEXTUAL_DEPRECATED("Use -performBlockOnMainThread: instead");
- (id)invokeInBackgroundThread TEXTUAL_DEPRECATED("It is recommended to use GCD in place of this method. There is nothing functionally wrong with using this method however.");
- (id)invokeOnMainThreadAndWaitUntilDone:(BOOL)waitUntilDone TEXTUAL_DEPRECATED("Use -performBlockOnMainThread: instead");

- (void)performBlockOnMainThread:(TXEmtpyBlockDataType)block; // Performs a block synchronously (blocks) on the main thread

+ (id)iomt TEXTUAL_DEPRECATED("Use -performBlockOnMainThread: instead"); // Invoke On Main Thread
+ (id)invokeOnThread:(NSThread *)thread TEXTUAL_DEPRECATED("This method is considered unsafe and may be removed in a future update");
+ (id)invokeOnMainThread TEXTUAL_DEPRECATED("Use -performBlockOnMainThread: instead");
+ (id)invokeInBackgroundThread TEXTUAL_DEPRECATED("It is recommended to use GCD in place of this method. There is nothing functionally wrong with using this method however.");
+ (id)invokeOnMainThreadAndWaitUntilDone:(BOOL)waitUntilDone TEXTUAL_DEPRECATED("Use -performBlockOnMainThread: instead");

+ (void)performBlockOnMainThread:(TXEmtpyBlockDataType)block; // Performs a block synchronously (blocks) on the main thread
@end
