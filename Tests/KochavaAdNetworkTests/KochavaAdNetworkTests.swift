
import XCTest

@testable import KochavaAdNetwork



final class KochavaAdNetworkTests: XCTestCase
{
    
    
    
    func test_register()
    {
        KVALog.shared.level = .trace
        
        KVAAdNetworkProduct.shared.register()
    }

    
    
    static var allTests =
    [
        ("test_register", test_register),
    ]
    
    
    
}



