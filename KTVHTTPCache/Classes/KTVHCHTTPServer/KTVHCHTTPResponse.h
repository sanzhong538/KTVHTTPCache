//
//  KTVHCHTTPResponse.h
//  KTVHTTPCache
//
//  Created by Single on 2017/8/10.
//  Copyright © 2017年 Single. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "KTVHCHTTPHeader.h"

@class KTVHCHTTPConnection;
@class KTVHCDataRequest;


@interface KTVHCHTTPResponse : NSObject <HTTPResponse>


+ (instancetype)new NS_UNAVAILABLE;
- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)responseWithConnection:(KTVHCHTTPConnection *)connection dataRequest:(KTVHCDataRequest *)dataRequest;


@end
