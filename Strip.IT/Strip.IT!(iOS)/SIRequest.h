//
//
//      _|          _|_|_|
//      _|        _|
//      _|        _|
//      _|        _|
//      _|_|_|_|    _|_|_|
//
//
//  Copyright (c) 2014-2015, Licheng Guo. ( http://titm.me )
//  http://github.com/titman
//
//
//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//  IN THE SOFTWARE.
//

#import <Foundation/Foundation.h>

#define MAIN_URL @"http://www.99kk5.com/"

typedef NS_ENUM (NSInteger, SIRequestType){
    
    SIRequestTypeHomepage,
    SIRequestTypeDetailPage,
    SIRequestTypeGetVideoURL,
};

typedef NS_ENUM(NSInteger, SIRequestMode) {
    
    SIRequestModeNormalRequest, // Default
    SIRequestModeWebRequest,
};


@interface SIRequest : NSObject

@property(nonatomic, strong) NSString * parameter;
@property(nonatomic, assign) SIRequestMode requestMode;

+(instancetype) requestWithType:(SIRequestType)type
                      parameter:(NSString *)parameter
                        success:(void (^)(NSURLSessionDataTask *task, id responseObject))success
                        failure:(void (^)(NSURLSessionDataTask *task, NSError *error))failure;

@end
