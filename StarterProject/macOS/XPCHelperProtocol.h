//
//  XPCHelperProtocol.h
//  macOS
//
//  Created by JACK on 2023/01/11.
//  Copyright © 2023 MBIENTLAB, INC. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol XPCHelperProtocol
- (void) upperCaseString:(NSString *)aString withReply:(void (^)(NSString *))reply;

- (void) registerAsAppWithListenerEndpoint:(NSXPCListenerEndpoint*)endpoint reply:(void (^)(void))reply;
- (void) unregisterAsApp;
- (void) sendToServiceWithQw:(float)qw Qx:(float)qx Qy:(float)qy Qz:(float)qz withReply:(void (^)(NSError*))reply;
@end

NS_ASSUME_NONNULL_END
